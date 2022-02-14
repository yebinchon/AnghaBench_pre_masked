
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_cie {unsigned long length; unsigned long cie_pointer; char version; char* augmentation; unsigned int code_alignment_factor; unsigned int return_address_reg; char encoding; unsigned char* instructions_end; int link; void* initial_instructions; int flags; int data_alignment_factor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*,int *) ;
 void* FUNC_4 (void*,unsigned int*) ;
 struct dwarf_cie* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(void *VAR_5, void *VAR_6, unsigned long VAR_7,
      unsigned char *VAR_8)
{
 struct dwarf_cie *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->length = VAR_7;







 VAR_9->cie_pointer = (unsigned long)VAR_5;

 VAR_9->version = *(char *)VAR_6++;
 FUNC_1(VAR_9->version != 1);

 VAR_9->augmentation = VAR_6;
 VAR_6 += FUNC_9(VAR_9->augmentation) + 1;

 VAR_11 = FUNC_4(VAR_6, &VAR_9->code_alignment_factor);
 VAR_6 += VAR_11;

 VAR_11 = FUNC_3(VAR_6, &VAR_9->data_alignment_factor);
 VAR_6 += VAR_11;





 if (VAR_9->version == 1) {
  VAR_9->return_address_reg = FUNC_2(VAR_6);
  VAR_6++;
 } else {
  VAR_11 = FUNC_4(VAR_6, &VAR_9->return_address_reg);
  VAR_6 += VAR_11;
 }

 if (VAR_9->augmentation[0] == 'z') {
  unsigned int VAR_12, VAR_13;
  VAR_9->flags |= VAR_0;

  VAR_13 = FUNC_4(VAR_6, &VAR_12);
  VAR_6 += VAR_13;

  FUNC_1((unsigned char *)VAR_6 > VAR_8);

  VAR_9->initial_instructions = VAR_6 + VAR_12;
  VAR_9->augmentation++;
 }

 while (*VAR_9->augmentation) {




  if (*VAR_9->augmentation == 'L') {
   VAR_6++;
   VAR_9->augmentation++;
  } else if (*VAR_9->augmentation == 'R') {





   VAR_9->encoding = *(char *)VAR_6++;
   VAR_9->augmentation++;
  } else if (*VAR_9->augmentation == 'P') {





   FUNC_0();
  } else if (*VAR_9->augmentation == 'S') {
   FUNC_0();
  } else {




   VAR_6 = VAR_9->initial_instructions;
   FUNC_1(!VAR_6);
   break;
  }
 }

 VAR_9->initial_instructions = VAR_6;
 VAR_9->instructions_end = VAR_8;


 FUNC_7(&VAR_4, VAR_10);
 FUNC_6(&VAR_9->link, &VAR_3);
 FUNC_8(&VAR_4, VAR_10);

 return 0;
}
