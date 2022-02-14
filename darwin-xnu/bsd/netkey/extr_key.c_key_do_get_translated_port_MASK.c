
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct secasvar {int flags; scalar_t__ remote_ike_port; int natt_encapsulated_src_port; TYPE_1__* lft_c; int state; } ;
struct secashead {int * savtree; } ;
struct TYPE_2__ {scalar_t__ sadb_lifetime_addtime; } ;


 int FUNC_0 (int ,size_t,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct secasvar* FUNC_2 (int *) ;
 struct secasvar* FUNC_3 (struct secasvar*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(
         struct secashead *VAR_5,
         struct secasvar *VAR_6,
         u_int VAR_7)
{
 struct secasvar *VAR_8, *VAR_9, *VAR_10;


 FUNC_1(VAR_4, VAR_0);


 VAR_10 = ((void*)0);

 for (VAR_8 = FUNC_2(&VAR_5->savtree[VAR_7]);
      VAR_8 != ((void*)0);
      VAR_8 = VAR_9) {

  VAR_9 = FUNC_3(VAR_8, VAR_2);


  FUNC_0(VAR_8->state, VAR_7, "key_do_get_translated_port");

  if ((VAR_8->flags & VAR_1) == 0 ||
   VAR_8->remote_ike_port != VAR_6->remote_ike_port)
   continue;

  if (VAR_10 == ((void*)0)) {
   VAR_10 = VAR_8;
   continue;
  }




  if (VAR_10->lft_c == ((void*)0) || VAR_8->lft_c == ((void*)0))
   FUNC_4("key_do_get_translated_port: "
      "lifetime_current is NULL.\n");


  if (VAR_3) {
   if (VAR_10->lft_c->sadb_lifetime_addtime >
    VAR_8->lft_c->sadb_lifetime_addtime) {
    VAR_10 = VAR_8;
   }
   continue;

  }


  if (VAR_10->lft_c->sadb_lifetime_addtime <
   VAR_8->lft_c->sadb_lifetime_addtime)
   VAR_10 = VAR_8;
 }

 if (VAR_10) {
  VAR_6->natt_encapsulated_src_port = VAR_10->natt_encapsulated_src_port;
  return 1;
 }

 return 0;
}
