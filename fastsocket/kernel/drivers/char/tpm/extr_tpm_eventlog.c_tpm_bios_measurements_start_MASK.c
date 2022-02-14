
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_bios_log {void* bios_event_log_end; void* bios_event_log; } ;
struct tcpa_event {scalar_t__ event_type; scalar_t__ event_size; } ;
struct seq_file {struct tpm_bios_log* private; } ;
typedef scalar_t__ loff_t ;



__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_0, loff_t *VAR_1)
{
 loff_t VAR_2;
 struct tpm_bios_log *VAR_3 = VAR_0->private;
 void *VAR_4 = VAR_3->bios_event_log;
 void *VAR_5 = VAR_3->bios_event_log_end;
 struct tcpa_event *VAR_6;


 for (VAR_2 = 0; VAR_2 < *VAR_1; VAR_2++) {
  VAR_6 = VAR_4;

  if ((VAR_4 + sizeof(struct tcpa_event)) < VAR_5) {
   if (VAR_6->event_type == 0 && VAR_6->event_size == 0)
    return ((void*)0);
   VAR_4 += sizeof(struct tcpa_event) + VAR_6->event_size;
  }
 }


 if ((VAR_4 + sizeof(struct tcpa_event)) >= VAR_5)
  return ((void*)0);

 VAR_6 = VAR_4;

 if ((VAR_6->event_type == 0 && VAR_6->event_size == 0) ||
     ((VAR_4 + sizeof(struct tcpa_event) + VAR_6->event_size) >= VAR_5))
  return ((void*)0);

 return VAR_4;
}
