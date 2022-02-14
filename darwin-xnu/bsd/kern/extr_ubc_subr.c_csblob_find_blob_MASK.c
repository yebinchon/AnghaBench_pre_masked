
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cs_blob {int csb_flags; int csb_mem_size; scalar_t__ csb_mem_kaddr; } ;
typedef int CS_GenericBlob ;


 int VAR_0 ;
 int const* FUNC_0 (int const*,int ,int ,int ) ;

const CS_GenericBlob *
FUNC_1(struct cs_blob *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 if ((VAR_1->csb_flags & VAR_0) == 0)
  return ((void*)0);
 return FUNC_0((const uint8_t *)VAR_1->csb_mem_kaddr, VAR_1->csb_mem_size, VAR_2, VAR_3);
}
