
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int qint64 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,char const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static uint64_t FUNC_5( const char* VAR_0 )
{
 unsigned char VAR_1[9];
 int VAR_2;
 qint64 VAR_3;

 FUNC_3( VAR_0 != ((void*)0) );

 VAR_2 = FUNC_4 (VAR_0) ;
 FUNC_0( "SV_RankDecodePlayerID: string length %d\n",VAR_2 );
 FUNC_2( VAR_1, VAR_0, VAR_2 );
 VAR_3 = FUNC_1(*(qint64*)VAR_1);
 return *(uint64_t*)&VAR_3;
}
