
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_iso_stream {int refcount; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct ehci_iso_stream *
FUNC_1 (struct ehci_iso_stream *VAR_0)
{
 if (FUNC_0 (VAR_0 != ((void*)0)))
  VAR_0->refcount++;
 return VAR_0;
}
