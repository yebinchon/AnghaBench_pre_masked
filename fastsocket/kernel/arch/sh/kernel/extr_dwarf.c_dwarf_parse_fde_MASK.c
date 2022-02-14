
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dwarf_fde {unsigned long length; unsigned long cie_pointer; unsigned char* end; int link; void* instructions; struct dwarf_cie* cie; int address_range; int initial_location; } ;
struct dwarf_cie {int encoding; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dwarf_cie* FUNC_0 (unsigned long) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (void*,unsigned int*) ;
 struct dwarf_fde* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(void *VAR_5, u32 VAR_6,
      void *VAR_7, unsigned long VAR_8,
      unsigned char *VAR_9)
{
 struct dwarf_fde *VAR_10;
 struct dwarf_cie *VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 void *VAR_14 = VAR_7;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->length = VAR_8;





 VAR_10->cie_pointer = (unsigned long)(VAR_14 - VAR_6 - 4);

 VAR_11 = FUNC_0(VAR_10->cie_pointer);
 VAR_10->cie = VAR_11;

 if (VAR_11->encoding)
  VAR_13 = FUNC_2(VAR_14, &VAR_10->initial_location,
       VAR_11->encoding);
 else
  VAR_13 = FUNC_1(VAR_14, &VAR_10->initial_location);

 VAR_14 += VAR_13;

 if (VAR_11->encoding)
  VAR_13 = FUNC_2(VAR_14, &VAR_10->address_range,
       VAR_11->encoding & 0x0f);
 else
  VAR_13 = FUNC_1(VAR_14, &VAR_10->address_range);

 VAR_14 += VAR_13;

 if (VAR_10->cie->flags & VAR_0) {
  unsigned int VAR_15;
  VAR_13 = FUNC_3(VAR_14, &VAR_15);
  VAR_14 += VAR_13 + VAR_15;
 }


 VAR_10->instructions = VAR_14;
 VAR_10->end = VAR_9;


 FUNC_6(&VAR_4, VAR_12);
 FUNC_5(&VAR_10->link, &VAR_3);
 FUNC_7(&VAR_4, VAR_12);

 return 0;
}
