
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int registers ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char FUNC_3 (void*) ;
 char FUNC_4 (void*) ;
 char* FUNC_5 (char*,unsigned char*,int ) ;
 char* FUNC_6 (char*,int) ;
 size_t VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,unsigned int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 char* VAR_10 ;

__attribute__((used)) static void
FUNC_9(int VAR_11)
{
 char *VAR_12 = VAR_10;
 int VAR_13;

 unsigned int VAR_14;
 int VAR_15;



 *VAR_12++ = 'T';
 VAR_12 = FUNC_6(VAR_12, VAR_11);






 for (VAR_13 = VAR_0; VAR_13 <= VAR_2; VAR_13++) {


                VAR_15 = FUNC_8 (VAR_13, &VAR_14);

  if (VAR_15 == VAR_1) {
   VAR_12 = FUNC_6(VAR_12, VAR_13);
                        *VAR_12++ = ':';

                        VAR_12 = FUNC_5(VAR_12, (unsigned char *)&VAR_14,
                                      VAR_9[VAR_13]);
                        *VAR_12++ = ';';
                }

 }
 *VAR_12 = 0;

 FUNC_7 (VAR_10);
}
