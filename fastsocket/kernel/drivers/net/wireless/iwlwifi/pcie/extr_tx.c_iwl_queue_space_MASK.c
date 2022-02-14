
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_queue {int read_ptr; int write_ptr; scalar_t__ n_window; scalar_t__ n_bd; } ;



__attribute__((used)) static int FUNC_0(const struct iwl_queue *VAR_0)
{
 int VAR_1 = VAR_0->read_ptr - VAR_0->write_ptr;

 if (VAR_0->read_ptr > VAR_0->write_ptr)
  VAR_1 -= VAR_0->n_bd;

 if (VAR_1 <= 0)
  VAR_1 += VAR_0->n_window;

 VAR_1 -= 2;
 if (VAR_1 < 0)
  VAR_1 = 0;
 return VAR_1;
}
