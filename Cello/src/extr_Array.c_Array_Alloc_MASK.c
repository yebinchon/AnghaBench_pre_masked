
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Header {int dummy; } ;
struct Array {int type; scalar_t__ data; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct Array*) ;
 int FUNC_1 (struct Header*,int ,int ) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct Array* VAR_1, size_t VAR_2) {
  FUNC_2((char*)VAR_1->data + FUNC_0(VAR_1) * VAR_2, 0, FUNC_0(VAR_1));
  struct Header* VAR_3 = (struct Header*)((char*)VAR_1->data + FUNC_0(VAR_1) * VAR_2);
  FUNC_1(VAR_3, VAR_1->type, VAR_0);
}
