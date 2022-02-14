
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mallocFailed; int aCollSeq; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_13__ {char* zName; int enc; } ;
typedef TYPE_2__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_4 (int *,char const*,int) ;
 TYPE_2__* FUNC_5 (int *,char*,int,TYPE_2__*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static CollSeq *FUNC_7(
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5
){
  CollSeq *VAR_6;
  int VAR_7 = FUNC_6(VAR_4);
  VAR_6 = FUNC_4(&VAR_3->aCollSeq, VAR_4, VAR_7);

  if( 0==VAR_6 && VAR_5 ){
    VAR_6 = FUNC_3(VAR_3, 3*sizeof(*VAR_6) + VAR_7 + 1 );
    if( VAR_6 ){
      CollSeq *VAR_8 = 0;
      VAR_6[0].zName = (char*)&VAR_6[3];
      VAR_6[0].enc = VAR_2;
      VAR_6[1].zName = (char*)&VAR_6[3];
      VAR_6[1].enc = VAR_1;
      VAR_6[2].zName = (char*)&VAR_6[3];
      VAR_6[2].enc = VAR_0;
      FUNC_1(VAR_6[0].zName, VAR_4, VAR_7);
      VAR_6[0].zName[VAR_7] = 0;
      VAR_8 = FUNC_5(&VAR_3->aCollSeq, VAR_6[0].zName, VAR_7, VAR_6);





      FUNC_0( VAR_8==0 || VAR_8==VAR_6 );
      if( VAR_8!=0 ){
        VAR_3->mallocFailed = 1;
        FUNC_2(VAR_3, VAR_8);
        VAR_6 = 0;
      }
    }
  }
  return VAR_6;
}
