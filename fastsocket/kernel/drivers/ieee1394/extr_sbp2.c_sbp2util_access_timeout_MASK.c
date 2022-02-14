
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp2_lu {scalar_t__ access_complete; } ;


 int VAR_0 ;
 long FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct sbp2_lu *VAR_1, int VAR_2)
{
 long VAR_3;

 VAR_3 = FUNC_0(
   VAR_0, VAR_1->access_complete, VAR_2);
 VAR_1->access_complete = 0;
 return VAR_3 <= 0;
}
