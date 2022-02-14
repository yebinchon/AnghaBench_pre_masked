
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int q3_dshader_t ;
typedef int q3_drawVerts ;
typedef int q3_drawSurfaces ;
typedef int q3_drawIndexes ;
typedef int q3_dplane_t ;
typedef int q3_dnode_t ;
typedef int q3_dmodel_t ;
typedef int q3_dleafsurfaces ;
typedef int q3_dleafbrushes ;
typedef int q3_dleaf_t ;
typedef int q3_dfog_t ;
typedef int q3_dbrushside_t ;
typedef int q3_dbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_2( void )
{
 if ( !VAR_2 )
 {
  FUNC_1();
 }

 FUNC_0 ("%6i models       %7i\n"
  ,VAR_16, (int)(VAR_16*sizeof(q3_dmodel_t)));
 FUNC_0 ("%6i shaders      %7i\n"
  ,VAR_9, (int)(VAR_9*sizeof(q3_dshader_t)));
 FUNC_0 ("%6i brushes      %7i\n"
  ,VAR_11, (int)(VAR_11*sizeof(q3_dbrush_t)));
 FUNC_0 ("%6i brushsides   %7i\n"
  ,VAR_12, (int)(VAR_12*sizeof(q3_dbrushside_t)));
 FUNC_0 ("%6i fogs         %7i\n"
  ,VAR_7, (int)(VAR_7*sizeof(q3_dfog_t)));
 FUNC_0 ("%6i planes       %7i\n"
  ,VAR_18, (int)(VAR_18*sizeof(q3_dplane_t)));
 FUNC_0 ("%6i entdata      %7i\n", VAR_2, VAR_3);

 FUNC_0 ("\n");

 FUNC_0 ("%6i nodes        %7i\n"
  ,VAR_17, (int)(VAR_17*sizeof(q3_dnode_t)));
 FUNC_0 ("%6i leafs        %7i\n"
  ,VAR_14, (int)(VAR_14*sizeof(q3_dleaf_t)));
 FUNC_0 ("%6i leafsurfaces %7i\n"
  ,VAR_15, (int)(VAR_15*sizeof(q3_dleafsurfaces[0])));
 FUNC_0 ("%6i leafbrushes  %7i\n"
  ,VAR_13, (int)(VAR_13*sizeof(q3_dleafbrushes[0])));
 FUNC_0 ("%6i drawverts    %7i\n"
  ,VAR_6, (int)(VAR_6*sizeof(q3_drawVerts[0])));
 FUNC_0 ("%6i drawindexes  %7i\n"
  ,VAR_4, (int)(VAR_4*sizeof(q3_drawIndexes[0])));
 FUNC_0 ("%6i drawsurfaces %7i\n"
  ,VAR_5, (int)(VAR_5*sizeof(q3_drawSurfaces[0])));

 FUNC_0 ("%6i lightmaps    %7i\n"
  ,VAR_8 / (VAR_1*VAR_0*3), VAR_8 );
 FUNC_0 ("       visibility   %7i\n"
  , VAR_10 );
}
