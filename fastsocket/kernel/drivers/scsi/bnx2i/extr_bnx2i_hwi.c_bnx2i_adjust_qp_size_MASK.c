
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2i_hba {int max_sqes; int max_rqes; int max_cqes; int cnic_dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bnx2i_hba *VAR_7)
{
 u32 VAR_8;

 if (FUNC_2(VAR_1, &VAR_7->cnic_dev_type) ||
     FUNC_2(VAR_2, &VAR_7->cnic_dev_type) ||
     FUNC_2(VAR_3, &VAR_7->cnic_dev_type)) {
  if (!FUNC_0(VAR_7->max_sqes))
   VAR_7->max_sqes = FUNC_1(VAR_7->max_sqes);

  if (!FUNC_0(VAR_7->max_rqes))
   VAR_7->max_rqes = FUNC_1(VAR_7->max_rqes);
 }





 VAR_8 = VAR_6 / VAR_5;
 if (VAR_7->max_sqes < VAR_8)
  VAR_7->max_sqes = VAR_8;
 else if (VAR_7->max_sqes % VAR_8)
  VAR_7->max_sqes = (VAR_7->max_sqes + VAR_8 - 1) &
     ~(VAR_8 - 1);


 VAR_8 = VAR_6 / VAR_0;
 if (VAR_7->max_cqes < VAR_8)
  VAR_7->max_cqes = VAR_8;
 else if (VAR_7->max_cqes % VAR_8)
  VAR_7->max_cqes = (VAR_7->max_cqes + VAR_8 - 1) &
     ~(VAR_8 - 1);


 VAR_8 = VAR_6 / VAR_4;
 if (VAR_7->max_rqes < VAR_8)
  VAR_7->max_rqes = VAR_8;
 else if (VAR_7->max_rqes % VAR_8)
  VAR_7->max_rqes = (VAR_7->max_rqes + VAR_8 - 1) &
     ~(VAR_8 - 1);
}
