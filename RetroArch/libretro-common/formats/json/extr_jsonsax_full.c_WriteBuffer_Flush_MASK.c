
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* WriteBuffer ;
struct TYPE_3__ {scalar_t__ used; int bytes; } ;
typedef int JSON_Writer ;
typedef int JSON_Status ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static JSON_Status FUNC_1(WriteBuffer VAR_0, JSON_Writer VAR_1)
{
   JSON_Status VAR_2 = FUNC_0(VAR_1, VAR_0->bytes, VAR_0->used);
   VAR_0->used = 0;
   return VAR_2;
}
