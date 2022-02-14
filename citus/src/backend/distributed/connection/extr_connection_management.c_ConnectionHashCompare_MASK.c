
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; int database; int user; int hostname; } ;
typedef int Size ;
typedef TYPE_1__ ConnectionHashKey ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_2, const void *VAR_3, Size VAR_4)
{
 ConnectionHashKey *VAR_5 = (ConnectionHashKey *) VAR_2;
 ConnectionHashKey *VAR_6 = (ConnectionHashKey *) VAR_3;

 if (FUNC_0(VAR_5->hostname, VAR_6->hostname, VAR_0) != 0 ||
  VAR_5->port != VAR_6->port ||
  FUNC_0(VAR_5->user, VAR_6->user, VAR_1) != 0 ||
  FUNC_0(VAR_5->database, VAR_6->database, VAR_1) != 0)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
