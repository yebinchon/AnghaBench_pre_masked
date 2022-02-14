
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* registry; char* ordering; int supplement; } ;
struct TYPE_5__ {TYPE_1__ cid; } ;
typedef int FT_Int ;
typedef int FT_Error ;
typedef TYPE_1__* CID_FaceInfo ;
typedef TYPE_2__* CID_Face ;


 int VAR_0 ;

__attribute__((used)) static FT_Error
  FUNC_0( CID_Face VAR_1,
               const char* *VAR_2,
               const char* *VAR_3,
               FT_Int *VAR_4 )
  {
    CID_FaceInfo VAR_5 = &VAR_1->cid;


    if ( VAR_2 )
      *VAR_2 = VAR_5->registry;

    if ( VAR_3 )
      *VAR_3 = VAR_5->ordering;

    if ( VAR_4 )
      *VAR_4 = VAR_5->supplement;

    return VAR_0;
  }
