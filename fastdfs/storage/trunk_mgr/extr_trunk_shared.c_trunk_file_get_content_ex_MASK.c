
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int full_filename ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
typedef TYPE_2__ FDFSTrunkFullInfo ;
typedef int FDFSStorePaths ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int,char*,int const) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int const*,TYPE_2__ const*,char*,int) ;

int FUNC_5(const FDFSStorePaths *VAR_8, const FDFSTrunkFullInfo *VAR_9, const int VAR_10, int *VAR_11, char *VAR_12, const int VAR_13)


{
 char VAR_14[VAR_4];
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_10 > VAR_13)
 {
  return VAR_2;
 }

 if (VAR_11 != ((void*)0))
 {
  VAR_15 = *VAR_11;
 }
 else
 {
  FUNC_4(VAR_8, VAR_9, VAR_14, sizeof(VAR_14));

  VAR_15 = FUNC_3(VAR_14, VAR_5);
  if (VAR_15 < 0)
  {
   return VAR_7 != 0 ? VAR_7 : VAR_1;
  }

  if (FUNC_2(VAR_15, VAR_9->file.offset + VAR_3, VAR_6) < 0)

  {
   VAR_16 = VAR_7 != 0 ? VAR_7 : VAR_1;
   FUNC_0(VAR_15);
   return VAR_16;
  }
 }

 VAR_17 = FUNC_1(VAR_15, VAR_12, VAR_10);
 if (VAR_17 == VAR_10)
 {
  VAR_16 = 0;
 }
 else
 {
  VAR_16 = VAR_7 != 0 ? VAR_7 : VAR_0;
 }

 if (VAR_11 == ((void*)0))
 {
  FUNC_0(VAR_15);
 }

 return VAR_16;
}
