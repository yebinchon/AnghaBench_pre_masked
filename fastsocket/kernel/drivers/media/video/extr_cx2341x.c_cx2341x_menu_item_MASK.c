
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ext_control {int value; int id; } ;
struct cx2341x_mpeg_params {int dummy; } ;


 char** FUNC_0 (struct cx2341x_mpeg_params const*,int ) ;
 scalar_t__ FUNC_1 (struct cx2341x_mpeg_params const*,struct v4l2_ext_control*) ;

__attribute__((used)) static const char *FUNC_2(const struct cx2341x_mpeg_params *VAR_0, u32 VAR_1)
{
 const char * const *VAR_2 = FUNC_0(VAR_0, VAR_1);
 struct v4l2_ext_control VAR_3;

 if (VAR_2 == ((void*)0))
  goto invalid;
 VAR_3.id = VAR_1;
 if (FUNC_1(VAR_0, &VAR_3))
  goto invalid;
 while (VAR_3.value-- && *VAR_2) VAR_2++;
 if (*VAR_2 == ((void*)0))
  goto invalid;
 return *VAR_2;

invalid:
 return "<invalid>";
}
