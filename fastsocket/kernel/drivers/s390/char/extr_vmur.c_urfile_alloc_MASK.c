
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urfile {int dev_reclen; struct urdev* urd; } ;
struct urdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct urdev*,struct urfile*,int ) ;
 struct urfile* FUNC_1 (int,int ) ;

__attribute__((used)) static struct urfile *FUNC_2(struct urdev *VAR_1)
{
 struct urfile *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct urfile), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->urd = VAR_1;

 FUNC_0("urfile_alloc: urd=%p urf=%p rl=%zu\n", VAR_1, VAR_2,
       VAR_2->dev_reclen);

 return VAR_2;
}
