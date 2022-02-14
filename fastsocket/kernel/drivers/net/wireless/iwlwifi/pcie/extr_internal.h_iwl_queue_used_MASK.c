
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_queue {int write_ptr; int read_ptr; } ;



__attribute__((used)) static inline bool FUNC_0(const struct iwl_queue *VAR_0, int VAR_1)
{
 return VAR_0->write_ptr >= VAR_0->read_ptr ?
  (VAR_1 >= VAR_0->read_ptr && VAR_1 < VAR_0->write_ptr) :
  !(VAR_1 < VAR_0->read_ptr && VAR_1 >= VAR_0->write_ptr);
}
