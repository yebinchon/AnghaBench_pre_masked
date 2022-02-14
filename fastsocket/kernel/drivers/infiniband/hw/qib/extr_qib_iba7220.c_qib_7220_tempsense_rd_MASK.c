
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int eep_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qib_devdata*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 if (VAR_4 > 7) {
  VAR_5 = -VAR_0;
  goto bail;
 }


 if (!((1 << VAR_4) & VAR_2)) {
  VAR_5 = 0;
  goto bail;
 }

 VAR_5 = FUNC_0(&VAR_3->eep_lock);
 if (VAR_5)
  goto bail;

 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_4, &VAR_6, 1);
 if (!VAR_5)
  VAR_5 = VAR_6;

 FUNC_1(&VAR_3->eep_lock);







bail:
 return VAR_5;
}
