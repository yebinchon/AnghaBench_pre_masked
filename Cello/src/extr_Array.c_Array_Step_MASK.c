
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Header {int dummy; } ;
struct Array {size_t tsize; } ;



__attribute__((used)) static size_t FUNC_0(struct Array* VAR_0) {
  return VAR_0->tsize + sizeof(struct Header);
}
