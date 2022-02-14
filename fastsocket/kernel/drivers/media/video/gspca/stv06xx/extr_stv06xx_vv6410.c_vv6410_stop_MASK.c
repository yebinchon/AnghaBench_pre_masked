
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sd*,int ,int ) ;
 int FUNC_2 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_4, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_0, "Halting stream");

 return (VAR_6 < 0) ? VAR_6 : 0;
}
