
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_multicast {int list; struct ucma_context* ctx; int id; } ;
struct ucma_context {int mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ucma_multicast*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ucma_multicast*) ;
 struct ucma_multicast* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct ucma_multicast* FUNC_7(struct ucma_context *VAR_4)
{
 struct ucma_multicast *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 do {
  VAR_6 = FUNC_1(&VAR_2, VAR_1);
  if (!VAR_6)
   goto error;

  FUNC_5(&VAR_3);
  VAR_6 = FUNC_0(&VAR_2, VAR_5, &VAR_5->id);
  FUNC_6(&VAR_3);
 } while (VAR_6 == -VAR_0);

 if (VAR_6)
  goto error;

 VAR_5->ctx = VAR_4;
 FUNC_4(&VAR_5->list, &VAR_4->mc_list);
 return VAR_5;

error:
 FUNC_2(VAR_5);
 return ((void*)0);
}
