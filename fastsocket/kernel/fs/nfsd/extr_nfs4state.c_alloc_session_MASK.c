
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_slot {int dummy; } ;
struct nfsd4_session {struct nfsd4_session** se_slots; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfsd4_session*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct nfsd4_session *FUNC_3(int VAR_3, int VAR_4)
{
 struct nfsd4_session *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_1 * sizeof(struct nfsd4_slot *)
   + sizeof(struct nfsd4_session) > VAR_2);
 VAR_6 = VAR_4 * sizeof(struct nfsd4_slot *);

 VAR_5 = FUNC_2(sizeof(*VAR_5) + VAR_6, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = sizeof(struct nfsd4_slot) + VAR_3;
  VAR_5->se_slots[VAR_7] = FUNC_2(VAR_6, VAR_0);
  if (!VAR_5->se_slots[VAR_7])
   goto out_free;
 }
 return VAR_5;
out_free:
 while (VAR_7--)
  FUNC_1(VAR_5->se_slots[VAR_7]);
 FUNC_1(VAR_5);
 return ((void*)0);
}
