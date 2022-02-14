
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct namecache* tqh_first; } ;
struct nchashhead {struct namecache* lh_first; } ;
struct vnode {char* v_name; TYPE_2__ v_ncchildren; struct nchashhead v_nclinks; } ;
struct TYPE_9__ {scalar_t__ le_prev; struct namecache* le_next; } ;
struct namecache {unsigned int nc_hashval; char const* nc_name; TYPE_1__ nc_hash; struct vnode* nc_dvp; struct vnode* nc_vp; } ;
struct componentname {unsigned int cn_hash; char const* cn_nameptr; unsigned int cn_namelen; } ;
struct TYPE_11__ {int nc_negentry; int nc_link; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nchashhead*) ;
 int FUNC_1 (struct nchashhead*,struct namecache*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nchashhead* FUNC_2 (struct vnode*,unsigned int) ;
 int FUNC_3 (int ) ;
 struct vnode* VAR_3 ;
 struct namecache* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct namecache*,int ) ;
 int FUNC_6 (TYPE_2__*,struct namecache*,int ) ;
 int FUNC_7 (TYPE_2__*,struct namecache*,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 void* FUNC_9 (char const*,unsigned int,unsigned int,int ,int ) ;
 int FUNC_10 (struct namecache*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_11 (char const*,unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (char*) ;
 unsigned int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char const*,unsigned int) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static void
FUNC_16(struct vnode *VAR_17, struct vnode *VAR_18, struct componentname *VAR_19, const char *VAR_20)
{
        struct namecache *VAR_21, *VAR_22;
 struct nchashhead *VAR_23;

 if (VAR_7)
  return;




 if ((VAR_18 != VAR_3) && (FUNC_0(&VAR_18->v_nclinks))) {




  if (VAR_20 != ((void*)0))
   FUNC_15(VAR_20);
  return;
 }





 if (VAR_16 < VAR_5 &&
     ((VAR_21 = VAR_11.tqh_first) == ((void*)0) ||
       VAR_21->nc_hash.le_prev != 0)) {



  VAR_21 = (struct namecache *)FUNC_8(sizeof(*VAR_21), VAR_1, VAR_2);
  VAR_16++;
 } else {



         VAR_21 = FUNC_4(&VAR_11);
  FUNC_7(&VAR_11, VAR_21, VAR_8);

  if (VAR_21->nc_hash.le_prev != 0) {




   FUNC_3(VAR_14);
   FUNC_10(VAR_21, 0);
  }
 }
 FUNC_3(VAR_12);




 VAR_21->nc_vp = VAR_18;
 VAR_21->nc_dvp = VAR_17;
 VAR_21->nc_hashval = VAR_19->cn_hash;

 if (VAR_20 == ((void*)0))
  VAR_21->nc_name = FUNC_9(VAR_19->cn_nameptr, VAR_19->cn_namelen, VAR_19->cn_hash, VAR_0, 0);
 else
  VAR_21->nc_name = VAR_20;
 const char *VAR_24 = VAR_18 ? VAR_18->v_name : ((void*)0);
 unsigned int VAR_25 = VAR_24 ? FUNC_13(VAR_24) : 0;
 if (VAR_24 && VAR_21 && VAR_21->nc_name && FUNC_14(VAR_21->nc_name, VAR_24, VAR_25) != 0) {
  unsigned int VAR_26 = FUNC_11(VAR_24, VAR_25);

  FUNC_15(VAR_21->nc_name);
  VAR_21->nc_name = FUNC_9(VAR_24, VAR_25, VAR_26, VAR_0, 0);
  VAR_21->nc_hashval = VAR_26;
 }





 FUNC_6(&VAR_11, VAR_21, VAR_8);

 VAR_23 = FUNC_2(VAR_17, VAR_19->cn_hash);
 FUNC_1(VAR_23, VAR_21, VAR_9);

 if (VAR_18) {




  FUNC_1(&VAR_18->v_nclinks, VAR_21, VAR_10.nc_link);
 } else {




         FUNC_6(&VAR_15, VAR_21, VAR_10.nc_negentry);

  VAR_13++;

  if (VAR_13 > VAR_4) {





          VAR_22 = FUNC_4(&VAR_15);
   FUNC_10(VAR_22, 1);
  }
 }




 if (VAR_18)
  FUNC_6(&VAR_17->v_ncchildren, VAR_21, VAR_6);
 else
  FUNC_5(&VAR_17->v_ncchildren, VAR_21, VAR_6);
}
