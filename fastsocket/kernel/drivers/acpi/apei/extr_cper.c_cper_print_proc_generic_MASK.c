
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cper_sec_proc_generic {int validation_bits; size_t proc_type; size_t proc_isa; size_t operation; int ip; int responder_id; int requestor_id; int target_addr; int proc_id; int cpu_version; int level; int flags; int proc_error_type; } ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char const*,int ,char**,size_t) ;
 char** VAR_12 ;
 char** VAR_13 ;
 char** VAR_14 ;
 char** VAR_15 ;
 char** VAR_16 ;
 int FUNC_2 (char*,char const*,size_t,...) ;

__attribute__((used)) static void FUNC_3(const char *VAR_17,
        const struct cper_sec_proc_generic *VAR_18)
{
 if (VAR_18->validation_bits & VAR_10)
  FUNC_2("%s""processor_type: %d, %s\n", VAR_17, VAR_18->proc_type,
         VAR_18->proc_type < FUNC_0(VAR_16) ?
         VAR_16[VAR_18->proc_type] : "unknown");
 if (VAR_18->validation_bits & VAR_4)
  FUNC_2("%s""processor_isa: %d, %s\n", VAR_17, VAR_18->proc_isa,
         VAR_18->proc_isa < FUNC_0(VAR_14) ?
         VAR_14[VAR_18->proc_isa] : "unknown");
 if (VAR_18->validation_bits & VAR_0) {
  FUNC_2("%s""error_type: 0x%02x\n", VAR_17, VAR_18->proc_error_type);
  FUNC_1(VAR_17, VAR_18->proc_error_type,
    VAR_12,
    FUNC_0(VAR_12));
 }
 if (VAR_18->validation_bits & VAR_6)
  FUNC_2("%s""operation: %d, %s\n", VAR_17, VAR_18->operation,
         VAR_18->operation < FUNC_0(VAR_15) ?
         VAR_15[VAR_18->operation] : "unknown");
 if (VAR_18->validation_bits & VAR_1) {
  FUNC_2("%s""flags: 0x%02x\n", VAR_17, VAR_18->flags);
  FUNC_1(VAR_17, VAR_18->flags, VAR_13,
    FUNC_0(VAR_13));
 }
 if (VAR_18->validation_bits & VAR_5)
  FUNC_2("%s""level: %d\n", VAR_17, VAR_18->level);
 if (VAR_18->validation_bits & VAR_11)
  FUNC_2("%s""version_info: 0x%016llx\n", VAR_17, VAR_18->cpu_version);
 if (VAR_18->validation_bits & VAR_2)
  FUNC_2("%s""processor_id: 0x%016llx\n", VAR_17, VAR_18->proc_id);
 if (VAR_18->validation_bits & VAR_9)
  FUNC_2("%s""target_address: 0x%016llx\n",
         VAR_17, VAR_18->target_addr);
 if (VAR_18->validation_bits & VAR_7)
  FUNC_2("%s""requestor_id: 0x%016llx\n",
         VAR_17, VAR_18->requestor_id);
 if (VAR_18->validation_bits & VAR_8)
  FUNC_2("%s""responder_id: 0x%016llx\n",
         VAR_17, VAR_18->responder_id);
 if (VAR_18->validation_bits & VAR_3)
  FUNC_2("%s""IP: 0x%016llx\n", VAR_17, VAR_18->ip);
}
