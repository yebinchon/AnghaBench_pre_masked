
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_9__ {TYPE_1__* fileBuffer; } ;
struct TYPE_8__ {scalar_t__ len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ FileOutputStream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(FileOutputStream *VAR_1, StringInfo VAR_2)
{
 StringInfo VAR_3 = VAR_1->fileBuffer;
 uint32 VAR_4 = VAR_3->len + VAR_2->len;

 FUNC_1(VAR_3, VAR_2->data, VAR_2->len);

 if (VAR_4 > VAR_0)
 {
  FUNC_0(VAR_1);

  FUNC_2(VAR_3);
 }
}
