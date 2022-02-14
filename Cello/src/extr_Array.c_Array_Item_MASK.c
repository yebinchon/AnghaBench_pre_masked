
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* var ;
struct Header {int dummy; } ;
struct Array {scalar_t__ data; } ;


 size_t FUNC_0 (struct Array*) ;

__attribute__((used)) static var FUNC_1(struct Array* VAR_0, size_t VAR_1) {
  return (char*)VAR_0->data + FUNC_0(VAR_0) * VAR_1 + sizeof(struct Header);
}
