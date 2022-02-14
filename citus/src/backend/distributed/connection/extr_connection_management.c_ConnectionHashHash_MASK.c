
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int database; int user; int port; int hostname; } ;
typedef int Size ;
typedef TYPE_1__ ConnectionHashKey ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static uint32
FUNC_3(const void *VAR_1, Size VAR_2)
{
 ConnectionHashKey *VAR_3 = (ConnectionHashKey *) VAR_1;
 uint32 VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_3->hostname, VAR_0);
 VAR_4 = FUNC_0(VAR_4, FUNC_1(VAR_3->port));
 VAR_4 = FUNC_0(VAR_4, FUNC_2(VAR_3->user, VAR_0));
 VAR_4 = FUNC_0(VAR_4, FUNC_2(VAR_3->database, VAR_0));

 return VAR_4;
}
