
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov772x_win_size {scalar_t__ height; scalar_t__ width; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct ov772x_win_size VAR_0 ;
 struct ov772x_win_size VAR_1 ;

__attribute__((used)) static const struct ov772x_win_size *FUNC_1(u32 VAR_2, u32 VAR_3)
{
 __u32 VAR_4;
 const struct ov772x_win_size *VAR_5;


 VAR_4 = FUNC_0(VAR_2 - VAR_0.width) +
  FUNC_0(VAR_3 - VAR_0.height);
 VAR_5 = &VAR_0;


 if (VAR_4 >
     FUNC_0(VAR_2 - VAR_1.width) +
     FUNC_0(VAR_3 - VAR_1.height))
  VAR_5 = &VAR_1;

 return VAR_5;
}
