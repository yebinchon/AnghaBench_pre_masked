
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;
struct JIT_BPF_Filter {struct JIT_BPF_Filter* mem; int * Function; } ;
typedef struct JIT_BPF_Filter JIT_BPF_Filter ;
typedef struct JIT_BPF_Filter INT ;


 int VAR_0 ;
 int * FUNC_0 (struct bpf_insn*,struct JIT_BPF_Filter,struct JIT_BPF_Filter*) ;
 scalar_t__ FUNC_1 (int ,int,char) ;
 int FUNC_2 (struct JIT_BPF_Filter*) ;
 int VAR_1 ;
 int FUNC_3 (struct JIT_BPF_Filter*) ;
 scalar_t__ FUNC_4 (int) ;

JIT_BPF_Filter* FUNC_5(struct bpf_insn *VAR_2, INT VAR_3)
{
 JIT_BPF_Filter *VAR_4;






 VAR_4=(struct JIT_BPF_Filter*)FUNC_4(sizeof(struct JIT_BPF_Filter));

 if(VAR_4==((void*)0))
 {
  return ((void*)0);
 }





 VAR_4->mem=(INT*)FUNC_4(VAR_0*sizeof(INT));

 if(VAR_4->mem==((void*)0))
 {



  FUNC_3(VAR_4);

  return ((void*)0);
 }


 if((VAR_4->Function = FUNC_0(VAR_2, VAR_3, VAR_4->mem))==((void*)0))
 {




  FUNC_3(VAR_4->mem);
  FUNC_3(VAR_4);

  return ((void*)0);
 }

 return VAR_4;

}
