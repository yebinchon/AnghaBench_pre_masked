
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4v_error_entry {int err_attrs; int err_cpu; int err_size; int err_raddr; int err_type; int err_stick; int err_handle; } ;
struct pt_regs {int dummy; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char const*,int,...) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_8, struct sun4v_error_entry *VAR_9, int VAR_10, const char *VAR_11, atomic_t *VAR_12)
{
 int VAR_13;

 FUNC_2("%s: Reporting on cpu %d\n", VAR_11, VAR_10);
 FUNC_2("%s: err_handle[%llx] err_stick[%llx] err_type[%08x:%s]\n",
        VAR_11,
        VAR_9->err_handle, VAR_9->err_stick,
        VAR_9->err_type,
        FUNC_4(VAR_9->err_type));
 FUNC_2("%s: err_attrs[%08x:%s %s %s %s %s %s %s %s]\n",
        VAR_11,
        VAR_9->err_attrs,
        ((VAR_9->err_attrs & VAR_5) ?
  "processor" : ""),
        ((VAR_9->err_attrs & VAR_2) ?
  "memory" : ""),
        ((VAR_9->err_attrs & VAR_3) ?
  "pio" : ""),
        ((VAR_9->err_attrs & VAR_1) ?
  "integer-regs" : ""),
        ((VAR_9->err_attrs & VAR_0) ?
  "fpu-regs" : ""),
        ((VAR_9->err_attrs & VAR_7) ?
  "user" : ""),
        ((VAR_9->err_attrs & VAR_4) ?
  "privileged" : ""),
        ((VAR_9->err_attrs & VAR_6) ?
  "queue-full" : ""));
 FUNC_2("%s: err_raddr[%016llx] err_size[%u] err_cpu[%u]\n",
        VAR_11,
        VAR_9->err_raddr, VAR_9->err_size, VAR_9->err_cpu);

 FUNC_3(VAR_8);

 if ((VAR_13 = FUNC_0(VAR_12)) != 0) {
  FUNC_1(VAR_12, 0);
  FUNC_5();
  FUNC_2("%s: Queue overflowed %d times.\n",
         VAR_11, VAR_13);
 }
}
