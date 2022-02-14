
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cipher; scalar_t__ hash; } ;
struct pohmelfs_crypto_thread {int psb; struct netfs_trans* trans; int * page; TYPE_1__ eng; } ;
struct netfs_trans {TYPE_1__* eng; } ;


 int FUNC_0 (struct netfs_trans*,int ,int) ;
 int FUNC_1 (struct pohmelfs_crypto_thread*) ;
 int FUNC_2 (struct pohmelfs_crypto_thread*) ;
 int FUNC_3 (struct pohmelfs_crypto_thread*) ;

__attribute__((used)) static int FUNC_4(struct pohmelfs_crypto_thread *VAR_0)
{
 struct netfs_trans *VAR_1;
 int VAR_2 = 0;

 VAR_1 = VAR_0->trans;
 VAR_1->eng = ((void*)0);

 if (VAR_0->eng.hash) {
  VAR_2 = FUNC_3(VAR_0);
  if (VAR_2)
   goto out_complete;
 }

 if (VAR_0->eng.cipher) {
  VAR_2 = FUNC_2(VAR_0);
  if (VAR_2)
   goto out_complete;
  VAR_1->eng = &VAR_0->eng;
 }

out_complete:
 VAR_0->page = ((void*)0);
 VAR_0->trans = ((void*)0);

 if (!VAR_1->eng)
  FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_0->psb, VAR_2);
 return VAR_2;
}
