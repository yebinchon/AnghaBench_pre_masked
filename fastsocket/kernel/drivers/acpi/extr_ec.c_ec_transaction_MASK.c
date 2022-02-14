
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {unsigned int wlen; unsigned int rlen; int * rdata; int const* wdata; int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct transaction*) ;
 int VAR_1 ;

int FUNC_1(u8 VAR_2,
     const u8 * VAR_3, unsigned VAR_4,
     u8 * VAR_5, unsigned VAR_6,
     int VAR_7)
{
 struct transaction VAR_8 = {.command = VAR_2,
    .wdata = VAR_3, .rdata = VAR_5,
    .wlen = VAR_4, .rlen = VAR_6};
 if (!VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_1, &VAR_8);
}
