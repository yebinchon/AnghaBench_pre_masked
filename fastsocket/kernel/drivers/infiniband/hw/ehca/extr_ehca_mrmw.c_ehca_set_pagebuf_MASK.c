
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ehca_mr_pginfo {int type; int hwpage_size; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ehca_mr_pginfo*,int ,int *) ;
 int FUNC_2 (struct ehca_mr_pginfo*,int ,int *) ;
 int FUNC_3 (struct ehca_mr_pginfo*,int ,int *) ;
 int FUNC_4 (struct ehca_mr_pginfo*,int ,int *) ;

int FUNC_5(struct ehca_mr_pginfo *VAR_2,
       u32 VAR_3,
       u64 *VAR_4)
{
 int VAR_5;

 switch (VAR_2->type) {
 case 129:
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_5 = VAR_1 >= VAR_2->hwpage_size ?
   FUNC_3(VAR_2, VAR_3, VAR_4) :
   FUNC_4(VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_0("bad pginfo->type=%x", VAR_2->type);
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
