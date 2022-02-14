
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int result_tf; int tag; int ap; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct ata_queued_cmd *VAR_0)
{
 FUNC_0(VAR_0->ap, VAR_0->tag, &VAR_0->result_tf);
 return 1;
}
