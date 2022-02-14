
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct gendisk {struct aoedev* private_data; } ;
struct aoedev {scalar_t__ nopen; int lock; int aoeminor; int aoemajor; } ;
typedef int fmode_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct aoedev *VAR_2 = VAR_0->private_data;
 ulong VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (--VAR_2->nopen == 0) {
  FUNC_2(&VAR_2->lock, VAR_3);
  FUNC_0(VAR_2->aoemajor, VAR_2->aoeminor);
  return 0;
 }
 FUNC_2(&VAR_2->lock, VAR_3);

 return 0;
}
