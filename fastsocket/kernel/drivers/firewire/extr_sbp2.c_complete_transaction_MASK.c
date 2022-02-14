
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp2_orb {int rcode; int kref; int (* callback ) (struct sbp2_orb*,int *) ;int link; } ;
struct fw_card {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sbp2_orb*,int *) ;

__attribute__((used)) static void FUNC_5(struct fw_card *VAR_2, int VAR_3,
     void *VAR_4, size_t VAR_5, void *VAR_6)
{
 struct sbp2_orb *VAR_7 = VAR_6;
 unsigned long VAR_8;
 FUNC_2(&VAR_2->lock, VAR_8);

 if (VAR_7->rcode == -1)
  VAR_7->rcode = VAR_3;
 if (VAR_7->rcode != VAR_0) {
  FUNC_1(&VAR_7->link);
  FUNC_3(&VAR_2->lock, VAR_8);
  VAR_7->callback(VAR_7, ((void*)0));
 } else {
  FUNC_3(&VAR_2->lock, VAR_8);
 }

 FUNC_0(&VAR_7->kref, VAR_1);
}
