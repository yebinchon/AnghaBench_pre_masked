
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int nr_requests; int nr_congestion_on; int nr_congestion_off; } ;



void FUNC_0(struct request_queue *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->nr_requests - (VAR_0->nr_requests / 8) + 1;
 if (VAR_1 > VAR_0->nr_requests)
  VAR_1 = VAR_0->nr_requests;
 VAR_0->nr_congestion_on = VAR_1;

 VAR_1 = VAR_0->nr_requests - (VAR_0->nr_requests / 8) - (VAR_0->nr_requests / 16) - 1;
 if (VAR_1 < 1)
  VAR_1 = 1;
 VAR_0->nr_congestion_off = VAR_1;
}
