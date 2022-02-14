
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_bios_log {void* bios_event_log_end; } ;
struct tcpa_event {scalar_t__ event_size; scalar_t__ event_type; } ;
struct seq_file {struct tpm_bios_log* private; } ;
typedef int loff_t ;



__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_0, void *VAR_1,
     loff_t *VAR_2)
{
 struct tcpa_event *VAR_3 = VAR_1;
 struct tpm_bios_log *VAR_4 = VAR_0->private;
 void *VAR_5 = VAR_4->bios_event_log_end;

 VAR_1 += sizeof(struct tcpa_event) + VAR_3->event_size;


 if ((VAR_1 + sizeof(struct tcpa_event)) >= VAR_5)
  return ((void*)0);

 VAR_3 = VAR_1;

 if (VAR_3->event_type == 0 && VAR_3->event_size == 0)
  return ((void*)0);

 if ((VAR_3->event_type == 0 && VAR_3->event_size == 0) ||
     ((VAR_1 + sizeof(struct tcpa_event) + VAR_3->event_size) >= VAR_5))
  return ((void*)0);

 (*VAR_2)++;
 return VAR_1;
}
