
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
typedef int TaskTracker ;
struct TYPE_4__ {int entrysize; int hcxt; int hash; scalar_t__ keysize; } ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char const*,int ,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static HTAB *
FUNC_5(const char *VAR_8, uint32 VAR_9)
{
 HASHCTL VAR_10;
 int VAR_11 = 0;
 HTAB *VAR_12 = ((void*)0);

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.keysize = VAR_6 + sizeof(uint32);
 VAR_10.entrysize = sizeof(TaskTracker);
 VAR_10.hash = VAR_7;
 VAR_10.hcxt = VAR_0;
 VAR_11 = (VAR_4 | VAR_5 | VAR_3);

 VAR_12 = FUNC_3(VAR_8, VAR_9,
          &VAR_10, VAR_11);
 if (VAR_12 == ((void*)0))
 {
  FUNC_0(VAR_2, (FUNC_1(VAR_1),
      FUNC_2("could not initialize task tracker hash")));
 }

 return VAR_12;
}
