
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ var ;
struct List {int dummy; } ;
struct Header {int dummy; } ;



__attribute__((used)) static var* FUNC_0(struct List* VAR_0, var VAR_1) {
  return (var*)((char*)VAR_1 - sizeof(struct Header) - 2 * sizeof(var));
}
