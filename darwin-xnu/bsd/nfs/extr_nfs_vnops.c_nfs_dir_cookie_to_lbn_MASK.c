
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct nfsmount {int dummy; } ;
struct nfsdmap {int mru; int* next; TYPE_1__* cookies; } ;
struct nfsbuflists {int dummy; } ;
struct nfsbuf {scalar_t__ nb_lblkno; scalar_t__ nb_data; } ;
struct nfs_dir_buf_header {int ndbh_count; } ;
struct direntry {scalar_t__ d_seekoff; } ;
typedef TYPE_2__* nfsnode_t ;
typedef int int8_t ;
struct TYPE_12__ {int direofcache_misses; int direofcache_hits; } ;
struct TYPE_11__ {scalar_t__ n_eofcookie; int n_cleanblkhd; struct nfsdmap* n_cookiecache; } ;
struct TYPE_10__ {scalar_t__ key; scalar_t__ lbn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfsbuf* FUNC_0 (struct nfsbuflists*) ;
 int FUNC_1 (struct nfsbuf*,struct nfsbuf*,int ) ;
 int FUNC_2 (int *,struct nfsbuf*,int ) ;
 int FUNC_3 (struct nfsbuf*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_4 (TYPE_2__*) ;
 struct direntry* FUNC_5 (struct direntry*) ;
 struct direntry* FUNC_6 (struct nfsbuf*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (struct nfsbuf*,int ,int ,int ) ;
 int FUNC_12 (struct nfsbuf*) ;
 int FUNC_13 (TYPE_2__*,struct nfsbuflists*,int ) ;
 int FUNC_14 (TYPE_2__*,struct nfsbuflists*,int ) ;
 int VAR_5 ;
 int FUNC_15 (struct nfsbuf*) ;
 int FUNC_16 (struct nfsbuf*) ;
 scalar_t__ FUNC_17 (struct nfsmount*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 TYPE_3__ VAR_6 ;

int
FUNC_20(nfsnode_t VAR_7, uint64_t VAR_8, int *VAR_9, uint64_t *VAR_10)
{
 struct nfsdmap *VAR_11 = VAR_7->n_cookiecache;
 int8_t VAR_12, VAR_13;
 int VAR_14, VAR_15;
 struct nfsmount *VAR_16;
 struct nfsbuf *VAR_17, *VAR_18;
 struct nfsbuflists VAR_19;
 struct direntry *VAR_20, *VAR_21;
 struct nfs_dir_buf_header *VAR_22;

 if (!VAR_8) {
  *VAR_10 = 0;
  *VAR_9 = 0;
  return (0);
 }

 if (FUNC_18(VAR_7))
  return (VAR_0);

 if (VAR_8 == VAR_7->n_eofcookie) {
  FUNC_19(VAR_7);
  FUNC_8(1, &VAR_6.direofcache_hits);
  *VAR_9 = 0;
  return (-1);
 }

 VAR_12 = *VAR_9 ? FUNC_7(VAR_8, VAR_7->n_eofcookie) : 0;
 VAR_15 = -1;


 for (VAR_14 = VAR_11 ? VAR_11->mru : -1; VAR_14 >= 0; VAR_14 = VAR_11->next[VAR_14]) {
  if (VAR_11->cookies[VAR_14].key == VAR_8) {

   *VAR_10 = VAR_11->cookies[VAR_14].lbn;
   FUNC_19(VAR_7);
   FUNC_8(1, &VAR_6.direofcache_hits);
   *VAR_9 = 0;
   return (0);
  }

  if (*VAR_9 && (VAR_15 == -1) && FUNC_7(VAR_11->cookies[VAR_14].key, VAR_8))
   VAR_15 = VAR_14;
 }

 if (VAR_12) {

  FUNC_19(VAR_7);
  FUNC_8(1, &VAR_6.direofcache_hits);
  return (-1);
 }
 if (VAR_15 >= 0) {

  *VAR_10 = VAR_11->cookies[VAR_15].lbn;
  FUNC_19(VAR_7);
  FUNC_8(1, &VAR_6.direofcache_hits);
  return (0);
 }
 FUNC_19(VAR_7);





 VAR_16 = FUNC_4(VAR_7);
 if (FUNC_17(VAR_16))
  return (VAR_1);
 VAR_21 = ((void*)0);
 VAR_13 = 0;

 FUNC_9(VAR_5);
 if (!FUNC_14(VAR_7, &VAR_19, VAR_3)) {
  VAR_18 = ((void*)0);
  while ((VAR_17 = FUNC_0(&VAR_19))) {
   FUNC_3(VAR_17, VAR_4);
   if (!VAR_18)
    FUNC_2(&VAR_7->n_cleanblkhd, VAR_17, VAR_4);
   else
    FUNC_1(VAR_18, VAR_17, VAR_4);
   VAR_18 = VAR_17;
   if (VAR_13)
    continue;
   FUNC_15(VAR_17);
   if (FUNC_11(VAR_17, VAR_2, 0, 0)) {

    FUNC_16(VAR_17);
    continue;
   }
   FUNC_16(VAR_17);


   VAR_22 = (struct nfs_dir_buf_header*)VAR_17->nb_data;
   VAR_20 = FUNC_6(VAR_17);
   VAR_21 = ((void*)0);
   for (VAR_14=0; (VAR_14 < VAR_22->ndbh_count) && (VAR_8 != VAR_20->d_seekoff); VAR_14++) {
    if (*VAR_9 && !VAR_21 && FUNC_7(VAR_8, VAR_20->d_seekoff)) {
     VAR_21 = VAR_20;
     VAR_15 = VAR_14;
    }
    VAR_20 = FUNC_5(VAR_20);
   }
   if ((VAR_14 == VAR_22->ndbh_count) && VAR_21) {

    VAR_20 = VAR_21;
    VAR_14 = VAR_15;
   } else if (VAR_14 < VAR_22->ndbh_count) {
    *VAR_9 = 0;
   }
   if (VAR_14 < (VAR_22->ndbh_count-1)) {

    *VAR_10 = VAR_17->nb_lblkno;
    VAR_13 = 1;
   } else if (VAR_14 == (VAR_22->ndbh_count-1)) {

    *VAR_10 = VAR_20->d_seekoff;
    VAR_13 = 1;
   }
   FUNC_12(VAR_17);
  }
  FUNC_13(VAR_7, &VAR_19, VAR_3);
 }
 FUNC_10(VAR_5);
 if (VAR_13) {
  FUNC_8(1, &VAR_6.direofcache_hits);
  return (0);
 }


 *VAR_10 = VAR_8;
 FUNC_8(1, &VAR_6.direofcache_misses);
 return (0);
}
