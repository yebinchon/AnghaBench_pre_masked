
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maxSize; size_t size; char** keywords; char** values; } ;
struct TYPE_4__ {char* hostname; char* database; char* user; int port; } ;
typedef int MemoryContext ;
typedef size_t Index ;
typedef TYPE_1__ ConnectionHashKey ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 char** FUNC_1 (int ,int) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (char const**) ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(ConnectionHashKey *VAR_3, char ***VAR_4, char ***VAR_5,
     Index *VAR_6, MemoryContext VAR_7)
{





 char VAR_8[12] = "";
 const char *VAR_9[] = {
  "host",
  "port",
  "dbname",
  "user",
  "client_encoding"
 };
 const char *VAR_10[] = {
  VAR_3->hostname,
  VAR_8,
  VAR_3->database,
  VAR_3->user,
  FUNC_0()
 };
 char **VAR_11 = *VAR_4 = FUNC_1(VAR_7, VAR_0.maxSize *
                sizeof(char *));
 char **VAR_12 = *VAR_5 = FUNC_1(VAR_7, VAR_0.maxSize *
               sizeof(char *));


 Index VAR_13 = VAR_0.size + FUNC_6(VAR_9);

 Index VAR_14 = 0;
 Index VAR_15 = 0;

 if (VAR_0.size + FUNC_6(VAR_9) >= VAR_0.maxSize)
 {

  FUNC_3(VAR_2, (FUNC_4(VAR_1),
      FUNC_5("too many connParams entries")));
 }

 FUNC_7(VAR_3->port, VAR_8);


 for (VAR_14 = 0; VAR_14 < VAR_0.size; VAR_14++)
 {

  VAR_11[VAR_14] = VAR_0.keywords[VAR_14];
  VAR_12[VAR_14] = VAR_0.values[VAR_14];
 }






 *VAR_6 = VAR_0.size;


 for (VAR_15 = 0;
   VAR_15 < FUNC_6(VAR_9);
   VAR_15++)
 {

  VAR_11[VAR_0.size + VAR_15] =
   FUNC_2(VAR_7, VAR_9[VAR_15]);
  VAR_12[VAR_0.size + VAR_15] =
   FUNC_2(VAR_7, VAR_10[VAR_15]);
 }


 VAR_11[VAR_13] = VAR_12[VAR_13] = ((void*)0);
}
