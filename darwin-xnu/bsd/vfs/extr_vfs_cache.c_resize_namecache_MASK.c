
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t u_long ;
struct nchashhead {struct namecache* lh_first; } ;
struct TYPE_2__ {struct namecache* le_next; } ;
struct namecache {size_t nc_hashval; TYPE_1__ nc_hash; int nc_dvp; int nc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nchashhead*,int ) ;
 int FUNC_1 (struct nchashhead*,struct namecache*,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct nchashhead* FUNC_4 (int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_5 (int ,int ) ;
 struct nchashhead* FUNC_6 (int,int ,size_t*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct nchashhead* VAR_8 ;
 scalar_t__ FUNC_7 (int,int,int*) ;

int
FUNC_8(int VAR_9)
{
    struct nchashhead *VAR_10;
    struct nchashhead *VAR_11;
    struct nchashhead *VAR_12, *VAR_13;
    struct namecache *VAR_14, *VAR_15;
    uint32_t VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;
    u_long VAR_21, VAR_22;

    if (VAR_9 < 0)
        return VAR_0;

    VAR_19 = (VAR_9 / 10);
    VAR_18 = VAR_9 + VAR_19;

    if (VAR_18 <= VAR_4) {
        return 0;
    }

    if (FUNC_7(VAR_18, 2, &VAR_20)) {
        return VAR_0;
    }

    VAR_10 = FUNC_6(VAR_20, VAR_2, &VAR_7);
    VAR_21 = VAR_7 + 1;

    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_2();

    VAR_11 = VAR_8;
    VAR_8 = VAR_10;
    VAR_22 = VAR_6;
    VAR_6 = VAR_21;




    for(VAR_16=0; VAR_16 < VAR_22; VAR_16++) {
 VAR_12 = &VAR_11[VAR_16];
 for (VAR_14=VAR_12->lh_first; VAR_14 != ((void*)0); VAR_14=VAR_15) {




     VAR_17 = FUNC_5(VAR_14->nc_name, 0);
     VAR_14->nc_hashval = VAR_17;
     VAR_13 = FUNC_4(VAR_14->nc_dvp, VAR_17);

     VAR_15 = VAR_14->nc_hash.le_next;
     FUNC_1(VAR_13, VAR_14, VAR_5);
 }
    }
    VAR_4 = VAR_18;
    VAR_3 = VAR_19;

    FUNC_3();
    FUNC_0(VAR_11, VAR_2);

    return 0;
}
