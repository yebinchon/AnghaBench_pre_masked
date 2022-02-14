
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* var ;
struct Tree {int ksize; } ;
struct Header {int dummy; } ;



__attribute__((used)) static var FUNC_0(struct Tree* VAR_0, var VAR_1) {
  return (char*)VAR_1 + 3 * sizeof(var) +
    sizeof(struct Header) + VAR_0->ksize +
    sizeof(struct Header);
}
