
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_file {struct ib_mad_agent** agent; scalar_t__ agents_dead; } ;
struct ib_mad_agent {int dummy; } ;



__attribute__((used)) static struct ib_mad_agent *FUNC_0(struct ib_umad_file *VAR_0, int VAR_1)
{
 return VAR_0->agents_dead ? ((void*)0) : VAR_0->agent[VAR_1];
}
