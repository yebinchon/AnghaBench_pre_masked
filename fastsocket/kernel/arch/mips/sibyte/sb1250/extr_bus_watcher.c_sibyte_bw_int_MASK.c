
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bw_stats_struct {unsigned long l2_err; unsigned long memio_err; int bus_error; int mem_bad_d; int mem_cor_d; int l2_bad_t; int l2_cor_t; int l2_bad_d; int l2_cor_d; scalar_t__ status_printed; void* status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,struct bw_stats_struct*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_10, void *VAR_11)
{
 struct bw_stats_struct *VAR_12 = VAR_11;
 unsigned long VAR_13;




 char VAR_14[1024];
 VAR_12->status = FUNC_10(FUNC_7(VAR_2));
 VAR_12->status_printed = 0;

 VAR_12->l2_err = VAR_13 = FUNC_10(FUNC_7(VAR_0));
 VAR_12->l2_cor_d += FUNC_2(VAR_13);
 VAR_12->l2_bad_d += FUNC_0(VAR_13);
 VAR_12->l2_cor_t += FUNC_3(VAR_13);
 VAR_12->l2_bad_t += FUNC_1(VAR_13);
 FUNC_11(0, FUNC_7(VAR_0));

 VAR_12->memio_err = VAR_13 = FUNC_10(FUNC_7(VAR_1));
 VAR_12->mem_cor_d += FUNC_6(VAR_13);
 VAR_12->mem_bad_d += FUNC_5(VAR_13);
 VAR_12->bus_error += FUNC_4(VAR_13);
 FUNC_11(0, FUNC_7(VAR_1));


 FUNC_9(VAR_14, VAR_12);
 FUNC_12(VAR_14);


 return VAR_5;
}
