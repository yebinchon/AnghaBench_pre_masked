
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct smd_shared {int ch1; int ch0; } ;
struct TYPE_2__ {int id; scalar_t__* name; } ;
struct smd_channel {TYPE_1__ pdev; int ch_list; scalar_t__ n; scalar_t__* name; int update_state; int write_avail; int read_avail; int write; int read; int * recv; int * send; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smd_channel* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,scalar_t__*,scalar_t__,struct smd_shared*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct smd_shared* FUNC_9 (scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_10(const char *VAR_14, uint32_t VAR_15, uint32_t VAR_16)
{
 struct smd_channel *VAR_17;
 struct smd_shared *VAR_18;

 VAR_18 = FUNC_9(VAR_1 + VAR_15, sizeof(*VAR_18));
 if (!VAR_18) {
  FUNC_6("smd_alloc_channel() cid %d does not exist\n", VAR_15);
  return;
 }

 VAR_17 = FUNC_0(sizeof(struct smd_channel), VAR_0);
 if (VAR_17 == 0) {
  FUNC_6("smd_alloc_channel() out of memory\n");
  return;
 }

 VAR_17->send = &VAR_18->ch0;
 VAR_17->recv = &VAR_18->ch1;
 VAR_17->n = VAR_15;

 if (FUNC_8(VAR_15)) {
  VAR_17->read = VAR_4;
  VAR_17->write = VAR_6;
  VAR_17->read_avail = VAR_5;
  VAR_17->write_avail = VAR_7;
  VAR_17->update_state = VAR_12;
 } else {
  VAR_17->read = VAR_8;
  VAR_17->write = VAR_10;
  VAR_17->read_avail = VAR_9;
  VAR_17->write_avail = VAR_11;
  VAR_17->update_state = VAR_13;
 }

 FUNC_2(VAR_17->name, "SMD_", 4);
 FUNC_2(VAR_17->name + 4, VAR_14, 20);
 VAR_17->name[23] = 0;
 VAR_17->pdev.name = VAR_17->name;
 VAR_17->pdev.id = -1;

 FUNC_7("smd_alloc_channel() '%s' cid=%d, shared=%p\n",
  VAR_17->name, VAR_17->n, VAR_18);

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_17->ch_list, &VAR_2);
 FUNC_4(&VAR_3);

 FUNC_5(&VAR_17->pdev);
}
