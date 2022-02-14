
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int q1_texinfo_t ;
typedef int q1_dvertex_t ;
typedef int q1_dplane_t ;
typedef int q1_dnode_t ;
struct TYPE_2__ {int nummiptex; } ;
typedef TYPE_1__ q1_dmiptexlump_t ;
typedef int q1_dmarksurfaces ;
typedef int q1_dleaf_t ;
typedef int q1_dface_t ;
typedef int q1_dedge_t ;
typedef int q1_dclipnode_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_1 (void)
{
 FUNC_0 ("%5i planes       %6i\n"
  ,VAR_9, (int)(VAR_9*sizeof(q1_dplane_t)));
 FUNC_0 ("%5i vertexes     %6i\n"
  ,VAR_12, (int)(VAR_12*sizeof(q1_dvertex_t)));
 FUNC_0 ("%5i nodes        %6i\n"
  ,VAR_8, (int)(VAR_8*sizeof(q1_dnode_t)));
 FUNC_0 ("%5i texinfo      %6i\n"
  ,VAR_11, (int)(VAR_11*sizeof(q1_texinfo_t)));
 FUNC_0 ("%5i faces        %6i\n"
  ,VAR_5, (int)(VAR_5*sizeof(q1_dface_t)));
 FUNC_0 ("%5i clipnodes    %6i\n"
  ,VAR_3, (int)(VAR_3*sizeof(q1_dclipnode_t)));
 FUNC_0 ("%5i leafs        %6i\n"
  ,VAR_6, (int)(VAR_6*sizeof(q1_dleaf_t)));
 FUNC_0 ("%5i marksurfaces %6i\n"
  ,VAR_7, (int)(VAR_7*sizeof(q1_dmarksurfaces[0])));
 FUNC_0 ("%5i surfedges    %6i\n"
  ,VAR_10, (int)(VAR_10*sizeof(q1_dmarksurfaces[0])));
 FUNC_0 ("%5i edges        %6i\n"
  ,VAR_4, (int)(VAR_4*sizeof(q1_dedge_t)));
 if (!VAR_13)
  FUNC_0 ("    0 textures          0\n");
 else
  FUNC_0 ("%5i textures     %6i\n",((q1_dmiptexlump_t*)VAR_0)->nummiptex, VAR_13);
 FUNC_0 ("      lightdata    %6i\n", VAR_2);
 FUNC_0 ("      visdata      %6i\n", VAR_14);
 FUNC_0 ("      entdata      %6i\n", VAR_1);
}
