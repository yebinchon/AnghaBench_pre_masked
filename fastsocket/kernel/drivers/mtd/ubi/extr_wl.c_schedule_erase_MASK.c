
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int torture; struct ubi_wl_entry* e; int * func; } ;
struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_2 ;
 struct ubi_work* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ubi_device*,struct ubi_work*) ;

__attribute__((used)) static int FUNC_3(struct ubi_device *VAR_3, struct ubi_wl_entry *VAR_4,
     int VAR_5)
{
 struct ubi_work *VAR_6;

 FUNC_0("schedule erasure of PEB %d, EC %d, torture %d",
        VAR_4->pnum, VAR_4->ec, VAR_5);

 VAR_6 = FUNC_1(sizeof(struct ubi_work), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->func = &VAR_2;
 VAR_6->e = VAR_4;
 VAR_6->torture = VAR_5;

 FUNC_2(VAR_3, VAR_6);
 return 0;
}
