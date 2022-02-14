
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c_hsotg_ep {int dir_in; } ;
struct s3c_hsotg {struct s3c_hsotg_ep* eps; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct s3c_hsotg_ep *FUNC_0(struct s3c_hsotg *VAR_2,
        u32 VAR_3)
{
 struct s3c_hsotg_ep *VAR_4 = &VAR_2->eps[VAR_3 & 0x7F];
 int VAR_5 = (VAR_3 & VAR_1) ? 1 : 0;
 int VAR_6 = VAR_3 & 0x7F;

 if (VAR_3 >= 0x100)
  return ((void*)0);

 if (VAR_6 > VAR_0)
  return ((void*)0);

 if (VAR_6 && VAR_4->dir_in != VAR_5)
  return ((void*)0);

 return VAR_4;
}
